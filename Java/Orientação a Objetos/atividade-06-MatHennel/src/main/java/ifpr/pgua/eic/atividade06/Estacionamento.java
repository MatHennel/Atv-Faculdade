package ifpr.pgua.eic.atividade06;

import java.time.LocalDateTime;
import java.util.ArrayList;



public class Estacionamento {
    private String nome;
    private String telefone;
    private ArrayList<Veiculo> veiculos = new ArrayList<>();

    public Estacionamento(String nome, String telefone) {
        this.nome = nome;
        this.telefone = telefone;
    }

    public boolean cadastraVeiculo(String placa, String modelo, String fabricante, int anoFabricacao, String cor){
        Veiculo veiculo = new Veiculo(placa, modelo, fabricante, anoFabricacao, cor);

        for(int i = 0;i < veiculos.size();i++){
            if(placa.equals(veiculos.get(i).getPlaca())){
                return false;
            }
        }
        veiculos.add(veiculo);
        return true;
    }

    public boolean registraEntrada(String placa){
        LocalDateTime horaEntrada = LocalDateTime.now();
        for(int i = 0;i < veiculos.size();i++){
            if(placa.equals(veiculos.get(i).getPlaca()) && veiculos.get(i).isEstaEstacionado() == false){
                veiculos.get(i).registraEntrada(horaEntrada);
                return true;
            }
        }
        return false;
    }

    public int registraSaida(String placa){
        LocalDateTime dataEntrada = LocalDateTime.now().minusMinutes(60); LocalDateTime dataSaida = LocalDateTime.now();

        int totalMinutos = DataUtils.calculaMinutos(dataEntrada,dataSaida);

        for(int i = 0;i < veiculos.size();i++){
            if(placa.equals(veiculos.get(i).getPlaca()) && veiculos.get(i).isEstaEstacionado()){
                veiculos.get(i).registraSaida();
                return totalMinutos;
            }
        }
        return -1;
        
        
    }

    public ArrayList<Veiculo> listaVeiculosEstacionados(){
        ArrayList<Veiculo> veiculosEstacionados = new ArrayList<Veiculo>();

        for(int i = 0;i < veiculos.size();i++){
            if(veiculos.get(i).isEstaEstacionado()){
                veiculosEstacionados.add(veiculos.get(i));
            }
        }

        return veiculosEstacionados;
    }

    public Veiculo buscarVeiculo(String placa){
        for(int i = 0;i < veiculos.size();i++){
            if(placa.equals(veiculos.get(i).getPlaca())){
                return veiculos.get(i);
            }
        }

        return null;
    }

    public String toString(){
        
        String str = "";

        return str;
    }

    public ArrayList<Veiculo> listaTodosVeiculos(){
        return veiculos;
    }

    public String getTelefone() {
        return telefone;
    }

    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }
    
}
