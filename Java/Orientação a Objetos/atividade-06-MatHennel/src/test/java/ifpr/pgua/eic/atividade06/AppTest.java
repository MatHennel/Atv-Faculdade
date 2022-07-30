package ifpr.pgua.eic.atividade06;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertNotNull;
import static org.junit.jupiter.api.Assertions.assertNull;
import static org.junit.jupiter.api.Assertions.assertThrows;
import static org.junit.jupiter.api.Assertions.assertTrue;

import java.beans.Transient;
import java.lang.reflect.Field;
import java.lang.reflect.Modifier;
import java.time.LocalDateTime;
import java.util.ArrayList;
import java.util.List;

import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;

import org.mockito.MockedStatic;
import org.mockito.Mockito;

/**************/
/*REPITA COMIGO:*/
/*NÃO PRECISO ALTERAR ESSE ARQUIVO*/
/*NÃO PRECISO ALTERAR ESSE ARQUIVO*/
/*NÃO PRECISO ALTERAR ESSE ARQUIVO*/
/*NÃO PRECISO ALTERAR ESSE ARQUIVO*/

/*ESTA CLASSE POSSUI UMA SÉRIE DE TESTES AUTOMATIZADOS
 *PARA VERIFICAR SE O CÓDIGO QUE VOCÊ CRIOU ESTÁ FUNCIONANDO
 *E FAZENDO AQUILO QUE É ESPERADO.
 *O QUE VOCÊ PRECISA NESTE FAZER É CLICAR NA SETINHA
 * VERDE QUE FICA AO LADO DO NOME DE CADA MÉTODO.
 * SE O VSCODE INDICAR QUE EXISTEM ERROS DE COMPILAÇÃO,
 * PODE CLICAR NO CANTO INFERIOR DIREITO NO BOTÃO DE PROCEED.
 * A DICA É COMEÇAR A RESOLVER CADA UM DOS TESTES NA SEQUÊNCIA.
 * O OBJETIVO É DEIXAR TODOS OS TESTES PASSANDO (CHECK VERDE) AO FINAL
 * DA ATIVIDADE.
*/




public class AppTest 
{

   
    @Test
    @DisplayName("A classe veículo possui todos os atributos com os tipos definidos")
    public void testaTiposAtributosVeiculo()throws NoSuchFieldException{
        Class<Veiculo> clazz = Veiculo.class;
        
        Field placa = clazz.getDeclaredField("placa");
        Field modelo = clazz.getDeclaredField("modelo");
        Field fabricante = clazz.getDeclaredField("fabricante");
        Field anoFabricacao = clazz.getDeclaredField("anoFabricacao");
        Field cor = clazz.getDeclaredField("cor");
        Field horaEntrada = clazz.getDeclaredField("horaEntrada");
        Field estaEstacionado = clazz.getDeclaredField("estaEstacionado");
        
        
        assertEquals(true,placa.getType()==String.class,"O tipo está errado");
        assertEquals(true,modelo.getType()==String.class,"O tipo está errado");
        assertEquals(true,fabricante.getType()==String.class,"O tipo está errado");
        assertEquals(true,anoFabricacao.getType().getTypeName()=="int","O tipo está errado");
        assertEquals(true,cor.getType()==String.class,"O tipo está errado");
        assertEquals(true,horaEntrada.getType()==LocalDateTime.class,"O tipo está errado");
        assertEquals(true,estaEstacionado.getType().getTypeName()=="boolean","O tipo está errado");
        
    }


    @Test
    @DisplayName("A classe veículo possui todos os atributos e são privados")
    public void testaAtributosVeiculo()throws NoSuchFieldException{
        Class<Veiculo> clazz = Veiculo.class;
        
        Field placa = clazz.getDeclaredField("placa");
        Field modelo = clazz.getDeclaredField("modelo");
        Field fabricante = clazz.getDeclaredField("fabricante");
        Field anoFabricacao = clazz.getDeclaredField("anoFabricacao");
        Field cor = clazz.getDeclaredField("cor");
        Field horaEntrada = clazz.getDeclaredField("horaEntrada");
        Field estaEstacionado = clazz.getDeclaredField("estaEstacionado");
        
        
        assertEquals(true,Modifier.isPrivate(placa.getModifiers()),"O atributo não está privado");
        assertEquals(true,Modifier.isPrivate(modelo.getModifiers()),"O atributo não está privado");
        assertEquals(true,Modifier.isPrivate(fabricante.getModifiers()),"O atributo não está privado");
        assertEquals(true,Modifier.isPrivate(anoFabricacao.getModifiers()),"O atributo não está privado");
        assertEquals(true,Modifier.isPrivate(cor.getModifiers()),"O atributo não está privado");
        assertEquals(true,Modifier.isPrivate(horaEntrada.getModifiers()),"O atributo não está privado");
        assertEquals(true,Modifier.isPrivate(estaEstacionado.getModifiers()),"O atributo não está privado");   
    }

    @Test
    @DisplayName("Na classe veiculo existe somente um método construtor definido para a classe veículo")
    public void testaConstrutorVeiculo(){

        String placa = "AAA-1122";
        String modelo = "Corsa";
        String fabricante = "Chevrolet";
        int anoFabricacao = 2002;
        String cor = "Vermelho";

        Veiculo veiculo = new Veiculo(placa,modelo,fabricante,anoFabricacao,cor);
        
        assertEquals(1, Veiculo.class.getDeclaredConstructors().length,"A classe veículo possui mais de um construtor");

    }   

    @Test
    @DisplayName("Na classe veiculo existe os getters e os atributos estão com valores corretos")
    public void testaGettersEInicializacaoVeiculo(){

        String placa = "AAA-1122";
        String modelo = "Corsa";
        String fabricante = "Chevrolet";
        int anoFabricacao = 2002;
        String cor = "Vermelho";

        Veiculo veiculo = VeiculoBuilder.umVeiculo()
                                        .comPlaca(placa)
                                        .comModelo(modelo)
                                        .comFabricante(fabricante)
                                        .comAnoFabricacao(anoFabricacao)
                                        .comCor(cor)
                                        .agora();


        assertEquals(veiculo.getPlaca(), placa,"O getter não está correto");
        assertEquals(veiculo.getModelo(), modelo,"O getter não está correto");
        assertEquals(veiculo.getFabricante(), fabricante,"O getter não está correto");
        assertEquals(veiculo.getAnoFabricacao(), anoFabricacao,"O getter não está correto");
        assertEquals(veiculo.getCor(), cor,"O getter não está correto");
        assertEquals(veiculo.isEstaEstacionado(), false,"O getter não está correto");
        assertNull(veiculo.getHoraEntrada(),"A hora foi inicializada errada");
    }


    @Test
    @DisplayName("Existe os setters e os atributos são atualizados com valores corretos")
    public void testaSettersEAtualizacaoVeiculo(){

        
        Veiculo veiculo = VeiculoBuilder.umVeiculo().agora();

        
        String placa = "BBB-1122";
        String modelo = "Gol";
        String fabricante = "Wolks";
        int anoFabricacao = 2001;
        String cor = "Azul";

        veiculo.setPlaca(placa);
        veiculo.setModelo(modelo);
        veiculo.setFabricante(fabricante);
        veiculo.setAnoFabricacao(anoFabricacao);
        veiculo.setCor(cor);

        assertEquals(veiculo.getPlaca(), placa,"O setter não funcionou");
        assertEquals(veiculo.getModelo(), modelo,"O setter não funcionou");
        assertEquals(veiculo.getFabricante(), fabricante,"O setter não funcionou");
        assertEquals(veiculo.getAnoFabricacao(), anoFabricacao,"O setter não funcionou");
        assertEquals(veiculo.getCor(), cor,"O setter não funcionou");
        assertEquals(veiculo.isEstaEstacionado(), false,"O setter não funcionou");
        assertNull(veiculo.getHoraEntrada(),"O setter não funcionou");

        assertThrows(NoSuchMethodException.class,()->{
                veiculo.getClass().getDeclaredMethod("setHoraEntrada", LocalDateTime.class);
            },
            "Não pode haver o método setHoraEntrada"
        );

        assertThrows(NoSuchMethodException.class,()->{
                veiculo.getClass().getDeclaredMethod("setEstaEstacionado", Boolean.class);
            },
            "Não pode haver o método setEstaEstacionado"
        );

    }

    @Test
    @DisplayName("Deve registrar a entrada corretamente")
    public void testaRegistraEntrada(){

        Veiculo veiculo = VeiculoBuilder.umVeiculo().agora();
        int ano = 2022;
        int dia = 01;
        int mes = 01;
        int hora = 10;
        int minuto = 0;

        LocalDateTime data = LocalDateTime.of(ano,mes,dia,hora,minuto);

        
        veiculo.registraEntrada(data);

        assertEquals(data, veiculo.getHoraEntrada(),"A hora de entrada do veículo está errada");
        assertEquals(true, veiculo.isEstaEstacionado(),"Não foi setado o atributo estaEstacionado corretamente");

    }

    @Test
    @DisplayName("Não deve registrar a entrada se já estacionado")
    public void testaNaoRegistraEntradaJaEstacionado(){

        Veiculo veiculo = VeiculoBuilder.umVeiculo().agora();
        int ano = 2022;
        int dia = 01;
        int mes = 01;
        int hora = 10;
        int minuto = 0;

        LocalDateTime data = LocalDateTime.of(ano,mes,dia,hora,minuto);

        
        veiculo.registraEntrada(data);
        boolean ret = veiculo.registraEntrada(data);

        assertEquals(data, veiculo.getHoraEntrada(),"A hora de entrada não está correta");
        assertEquals(true, veiculo.isEstaEstacionado(),"Não foi setado o atributo estaEstacionado corretamente");
        assertEquals(false, ret, "O retorno do método registraEntrada está incorreto");
        
    }


    @Test
    @DisplayName("Deve registrar a saida corretamente")
    public void testaRegistraSaida(){

        Veiculo veiculo = VeiculoBuilder.umVeiculo().agora();
        
        int ano = 2022;
        int dia = 01;
        int mes = 01;
        int hora = 10;
        int minuto = 0;

        LocalDateTime data = LocalDateTime.of(ano,mes,dia,hora,minuto);

        
        veiculo.registraEntrada(data);

        boolean ret = veiculo.registraSaida();

        assertEquals(true, ret,"O retorno do método registraSaida está incorreto");
        assertEquals(false, veiculo.isEstaEstacionado(),"O atributo estaEstacionado não foi setado corretamente");
        assertNull(veiculo.getHoraEntrada(),"A horaEntrada não foi setada para null");

    }

    @Test
    @DisplayName("Nao deve registrar a saida de um veículo não estacionado")
    public void testaNaoRegistraSaidaNaoEstacionado(){

        Veiculo veiculo = VeiculoBuilder.umVeiculo().agora();
        
        boolean ret = veiculo.registraSaida();

        assertEquals(false, ret,"O retorno do método registraSaida está incorreto");
        assertEquals(false, veiculo.isEstaEstacionado(),"O atributo estaEstacionado não foi setado corretamente");
        assertNull(veiculo.getHoraEntrada(),"A horaEntrada não foi setada para null");

    }

    @Test
    @DisplayName("A classe Estacionamento existe e possui os atributos corretos e privados")
    public void testaEstacionamentoDeclaradoCorreto() throws NoSuchFieldException{
        Class clazz = Estacionamento.class;

        Field nome = clazz.getDeclaredField("nome");
        Field telefone = clazz.getDeclaredField("telefone");
        Field veiculos = clazz.getDeclaredField("veiculos");

        assertEquals(true, nome.getType() == String.class);
        assertEquals(true, telefone.getType() == String.class);
        assertEquals(true, veiculos.getType() == ArrayList.class);
        

        assertEquals(true, Modifier.isPrivate(nome.getModifiers()),"O atributo nome não está privado");
        assertEquals(true, Modifier.isPrivate(telefone.getModifiers()),"O atributo telefone não está privado");
        assertEquals(true, Modifier.isPrivate(veiculos.getModifiers()),"O atributo veiculos não está privado");
        
    }

    @Test
    @DisplayName("A classe estacionamento possui somente o construtor declarado")
    public void testaInstanciarEstacionamento(){

        Estacionamento estacionamento = new Estacionamento("Estacionamento","1122");
        
        assertEquals(1, Estacionamento.class.getDeclaredConstructors().length,"A classe estacionamento possui mais de um construtor");

    }

    @Test
    @DisplayName("A classe estacionamento permite listar todos os veiculos")
    public void testaListaTodosVeiculos(){
        
        Estacionamento estacionamento = new Estacionamento("Estacionamento","1122");

        ArrayList<Veiculo> lista = estacionamento.listaTodosVeiculos();

        assertNotNull(lista,"O retorno do método listaTodosVeiculos não pode ser null");
        assertEquals(0, lista.size(),"A quantidade de elementos da lista deveria ser 0");

    }


    @Test
    @DisplayName("A classe estacionamento permite registrar um veiculo e armazena no arraylist")
    public void testaCadastrarVeiculo(){
        String placa = "BBB-1122";
        String modelo = "Gol";
        String fabricante = "Wolks";
        int anoFabricacao = 2001;
        String cor = "Azul";

        Estacionamento estacionamento = new Estacionamento("Estacionamento","1122");
        
        boolean ret = estacionamento.cadastraVeiculo(placa, modelo, fabricante, anoFabricacao, cor);
        
        assertEquals(true,ret,"O método cadastraVeiculo deve retornar true neste caso");
        assertEquals(1, estacionamento.listaTodosVeiculos().size(),"Depois de cadastrar um carro o tamanho da lista deve ser 1");
        assertEquals(placa, estacionamento.listaTodosVeiculos().get(0).getPlaca(),"A placa do carro cadastrado deve estar na lista");

    }


    @Test
    @DisplayName("A classe estacionamento não permite registrar dois veiculos com a mesma placa")
    public void testaNãoCadastrarPlacaRepetida(){
        
        Estacionamento estacionamento = new Estacionamento("Estacionamento","1122");
        
        String placa = "BBB-1122";
        String modelo1 = "Gol";
        String fabricante1 = "Wolks";
        int anoFabricacao1 = 2001;
        String cor1 = "Azul";

        String modelo2 = "Gol";
        String fabricante2 = "Wolks";
        int anoFabricacao2 = 2001;
        String cor2 = "Azul";


        boolean ret1 = estacionamento.cadastraVeiculo(placa, modelo1, fabricante1, anoFabricacao1, cor1);
        boolean ret2 = estacionamento.cadastraVeiculo(placa, modelo2, fabricante2, anoFabricacao2, cor2);
        
        assertEquals(true,ret1,"O retorno do método cadastraVeiculo deve ser true neste caso");
        assertEquals(false, ret2,"O retorno do método cadastraVeiculo deve ser false");
        assertEquals(1, estacionamento.listaTodosVeiculos().size(),"O tamanho da lista deve ser 1 depois de cadastrar um veiculo");
    
    }

    @Test
    @DisplayName("A classe estacionamento permite buscar um veiculo pela placa")
    public void testaBuscarVeiculoPlaca(){
        Estacionamento estacionamento = new Estacionamento("Estacionamento","1122");
        
        String placa1 = "BBB-1122";
        String modelo1 = "Gol";
        String fabricante1 = "Wolks";
        int anoFabricacao1 = 2001;
        String cor1 = "Azul";

        String placa2 = "AAA-1122";
        String modelo2 = "Variant";
        String fabricante2 = "Wolks";
        int anoFabricacao2 = 1954;
        String cor2 = "Azul";


        estacionamento.cadastraVeiculo(placa1, modelo1, fabricante1, anoFabricacao1, cor1);
        estacionamento.cadastraVeiculo(placa2, modelo2, fabricante2, anoFabricacao2, cor2);
        

        Veiculo veiculo = estacionamento.buscarVeiculo(placa1);

        assertEquals(placa1,veiculo.getPlaca(),"O veículo não foi encontrado corretamente");
    }

    @Test
    @DisplayName("A classe estacionamento retorna null buscar um veiculo por uma placa que não existe")
    public void testaNullBuscarVeiculoPlaca(){
        Estacionamento estacionamento = new Estacionamento("Estacionamento","1122");
        
        String placa1 = "BBB-1122";
        String modelo1 = "Gol";
        String fabricante1 = "Wolks";
        int anoFabricacao1 = 2001;
        String cor1 = "Azul";

        String placa2 = "AAA-1122";
        String modelo2 = "Variant";
        String fabricante2 = "Wolks";
        int anoFabricacao2 = 1954;
        String cor2 = "Azul";

        String placa3 = "CCC-0088";


        estacionamento.cadastraVeiculo(placa1, modelo1, fabricante1, anoFabricacao1, cor1);
        estacionamento.cadastraVeiculo(placa2, modelo2, fabricante2, anoFabricacao2, cor2);
        

        Veiculo veiculo = estacionamento.buscarVeiculo(placa3);

        assertNull(veiculo,"O veículo não deveria ter sido encontrado");
    }

    @Test
    @DisplayName("A classe estacionamento permite registrar a entrada de um veiculo cadastrado")
    public void testaEstacionamentoRegistraEntrada(){
        Estacionamento estacionamento = new Estacionamento("Estacionamento","1122");
        
        String placa1 = "BBB-1122";
        String modelo1 = "Gol";
        String fabricante1 = "Wolks";
        int anoFabricacao1 = 2001;
        String cor1 = "Azul";

        String placa2 = "AAA-1122";
        String modelo2 = "Variant";
        String fabricante2 = "Wolks";
        int anoFabricacao2 = 1954;
        String cor2 = "Azul";

        int ano = 2022;
        int dia = 01;
        int mes = 01;
        int hora = 10;
        int minuto = 0;

        LocalDateTime data = LocalDateTime.of(ano, mes, dia, hora, minuto);

        estacionamento.cadastraVeiculo(placa1, modelo1, fabricante1, anoFabricacao1, cor1);
        estacionamento.cadastraVeiculo(placa2, modelo2, fabricante2, anoFabricacao2, cor2);
        

        //criado para mockar o LocalDateTime.now() para sempre retornar uma data conhecida
        MockedStatic<LocalDateTime> mock = Mockito.mockStatic(LocalDateTime.class);           
        mock.when(LocalDateTime::now).thenReturn(data);
           
        boolean ret = estacionamento.registraEntrada(placa1);

        Veiculo veiculo = estacionamento.buscarVeiculo(placa1);
        
        assertEquals(true, ret,"Não foi possível registrar a entrada do veículo");
        assertEquals(true, veiculo.isEstaEstacionado(),"O veículo deve estar com o atributo estaEstacionado como true");
        assertEquals(data, veiculo.getHoraEntrada(),"O atrituto horaEntrada do veículo não está correto");
        
        
        
    
    }   


    @Test
    @DisplayName("A classe estacionamento não permite registrar a entrada de um veiculo já estacionado")
    public void testaEstacionamentoNaoRegistraEntradaJaEstacionado(){
        Estacionamento estacionamento = new Estacionamento("Estacionamento","1122");
        
        String placa1 = "BBB-1122";
        String modelo1 = "Gol";
        String fabricante1 = "Wolks";
        int anoFabricacao1 = 2001;
        String cor1 = "Azul";

        String placa2 = "AAA-1122";
        String modelo2 = "Variant";
        String fabricante2 = "Wolks";
        int anoFabricacao2 = 1954;
        String cor2 = "Azul";

        int ano = 2022;
        int dia = 01;
        int mes = 01;
        int hora = 10;
        int minuto = 0;

        LocalDateTime data = LocalDateTime.of(ano, mes, dia, hora, minuto);

        estacionamento.cadastraVeiculo(placa1, modelo1, fabricante1, anoFabricacao1, cor1);
        estacionamento.cadastraVeiculo(placa2, modelo2, fabricante2, anoFabricacao2, cor2);
        
        //criado para mockar o LocalDateTime.now() para sempre retornar uma data conhecida
        MockedStatic<LocalDateTime> mock = Mockito.mockStatic(LocalDateTime.class);           
        mock.when(LocalDateTime::now).thenReturn(data);
        
        boolean ret = estacionamento.registraEntrada(placa1);

        boolean ret2 = estacionamento.registraEntrada(placa1);

        assertEquals(false, ret2,"Não pode registrar a entrada de um veículo já estacionado");

    }  
    
    @Test
    @DisplayName("A classe estacionamento não permite registrar a entrada de um veiculo não cadastrado")
    public void testaEstacionamentoNaoRegistraEntradaNaoCadastrado(){
        Estacionamento estacionamento = new Estacionamento("Estacionamento","1122");
        
        boolean ret = estacionamento.registraEntrada("AAA-1122");

        assertEquals(false, ret,"Não pode registrar a entrada e um veículo não cadastrado");
        
    }

    @Test
    @DisplayName("A classe estacionamento permite registrar a saida de um veiculo e calcula o tempo em minutos")
    public void testaEstacionamentoRegistraSaida(){
        Estacionamento estacionamento = new Estacionamento("Estacionamento","1122");
        
        String placa1 = "BBB-1122";
        String modelo1 = "Gol";
        String fabricante1 = "Wolks";
        int anoFabricacao1 = 2001;
        String cor1 = "Azul";

        String placa2 = "AAA-1122";
        String modelo2 = "Variant";
        String fabricante2 = "Wolks";
        int anoFabricacao2 = 1954;
        String cor2 = "Azul";

        int ano = 2022;
        int dia = 01;
        int mes = 01;
        int horaEntrada = 10;
        int minutoEntrada = 0;

        int horaSaida = 11;
        int minutoSaida = 0;


        LocalDateTime dataEntrada = LocalDateTime.of(ano, mes, dia, horaEntrada, minutoEntrada);
        LocalDateTime dataSaida = LocalDateTime.of(ano,mes,dia,horaSaida,minutoSaida);
        //criado para mockar o LocalDateTime.now() para sempre retornar uma data conhecida
        MockedStatic<LocalDateTime> mock = Mockito.mockStatic(LocalDateTime.class);           
        
        estacionamento.cadastraVeiculo(placa1, modelo1, fabricante1, anoFabricacao1, cor1);
        estacionamento.cadastraVeiculo(placa2, modelo2, fabricante2, anoFabricacao2, cor2);
        

        mock.when(LocalDateTime::now).thenReturn(dataEntrada);
        boolean ret1 = estacionamento.registraEntrada(placa1);

        mock.when(LocalDateTime::now).thenReturn(dataSaida);
        int ret2 = estacionamento.registraSaida(placa1);

        assertEquals(60, ret2,"O tempo em minutos está errado");
        
    }

    @Test
    @DisplayName("A classe estacionamento não permite registrar a saida de um veiculo não estacionado")
    public void testaEstacionamentoNaoRegistraSaidaNaoEstacionado(){
        Estacionamento estacionamento = new Estacionamento("Estacionamento","1122");
        
        String placa1 = "BBB-1122";
        String modelo1 = "Gol";
        String fabricante1 = "Wolks";
        int anoFabricacao1 = 2001;
        String cor1 = "Azul";

        String placa2 = "AAA-1122";
        String modelo2 = "Variant";
        String fabricante2 = "Wolks";
        int anoFabricacao2 = 1954;
        String cor2 = "Azul";

        
        estacionamento.cadastraVeiculo(placa1, modelo1, fabricante1, anoFabricacao1, cor1);
        estacionamento.cadastraVeiculo(placa2, modelo2, fabricante2, anoFabricacao2, cor2);
        
        boolean ret1 = estacionamento.registraEntrada(placa1);
        int ret2 = estacionamento.registraSaida(placa2);

        assertEquals(-1, ret2,"Não pode registrar a saída de um veículo não estacionado");
        
    }

    @Test
    @DisplayName("A classe estacionamento deve listar os veiculos estacionados")
    public void testaListaVeiculosEstacionados(){
        
        Estacionamento estacionamento = new Estacionamento("Estacionamento","1122");
        
        estacionamento.cadastraVeiculo("AAA-1122", "A", "A", 1, "Azul");
        estacionamento.cadastraVeiculo("BBB-1122", "B", "B", 2, "Bzul");
        estacionamento.cadastraVeiculo("CCC-1122", "C", "C", 3, "Czul");
        

        estacionamento.registraEntrada("AAA-1122");
        estacionamento.registraEntrada("CCC-1122");

        List<Veiculo> estacionados = estacionamento.listaVeiculosEstacionados();

        assertEquals(2, estacionados.size(),"A lista de veiculos estacionados está incorreta");
    }

}