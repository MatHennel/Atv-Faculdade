/**************/
/*REPITA COMIGO:*/
/*NÃO PRECISO ALTERAR ESSE ARQUIVO*/
/*NÃO PRECISO ALTERAR ESSE ARQUIVO*/
/*NÃO PRECISO ALTERAR ESSE ARQUIVO*/
/*NÃO PRECISO ALTERAR ESSE ARQUIVO*/
package ifpr.pgua.eic.atividade06;

public class VeiculoBuilder{


    private static VeiculoBuilder instance;
    private Veiculo veiculo = new Veiculo("AAA-1122", "Corsa", "Chevrolet", 2002, "Azul");

    private VeiculoBuilder(){}

    public static VeiculoBuilder umVeiculo(){

        instance = new VeiculoBuilder();
        return instance;
    }

    public VeiculoBuilder comPlaca(String placa){
        instance.veiculo.setPlaca(placa);
        return instance;
    }

    public VeiculoBuilder comModelo(String modelo){
        instance.veiculo.setModelo(modelo);
        return instance;
    }

    public VeiculoBuilder comFabricante(String fabricante){
        instance.veiculo.setFabricante(fabricante);
        return instance;
    }

    public VeiculoBuilder comAnoFabricacao(int ano){
        instance.veiculo.setAnoFabricacao(ano);
        return instance;
    }

    public VeiculoBuilder comCor(String cor){
        instance.veiculo.setCor(cor);
        return instance;
    }

    public Veiculo agora(){
        return instance.veiculo;
    }






}