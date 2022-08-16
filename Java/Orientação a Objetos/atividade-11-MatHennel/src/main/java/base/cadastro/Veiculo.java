package base.cadastro;

import java.time.LocalDateTime;

public class Veiculo {
    private String placa;
    private String modelo;
    private String fabricante;
    private int anoFabricacao;
    private String cor;
    private LocalDateTime horaEntrada;
    private boolean estaEstacionado;
    

    public Veiculo(String placa, String modelo, String fabricante, int anoFabricacao, String cor) {
        this.placa = placa;
        this.modelo = modelo;
        this.fabricante = fabricante;
        this.anoFabricacao = anoFabricacao;
        this.cor = cor;
    }

    public boolean registraSaida(){
        if(estaEstacionado){
            estaEstacionado = false;
            horaEntrada = null;
            return true;
        }else{
            return false;
        }
        
    }

    public boolean registraEntrada(LocalDateTime horaEntrada){
        if(estaEstacionado){
            return false;
        }else{
            this.horaEntrada = horaEntrada;
            estaEstacionado = true;
            return true;
        }
    }

    public boolean isEstaEstacionado() {
        return estaEstacionado;
    }

   

    public LocalDateTime getHoraEntrada() {
        return horaEntrada;
    }

    

    public String getCor() {
        return cor;
    }

    public void setCor(String cor) {
        this.cor = cor;
    }

    public int getAnoFabricacao() {
        return anoFabricacao;
    }

    public void setAnoFabricacao(int anoFabricacao) {
        this.anoFabricacao = anoFabricacao;
    }

    public String getFabricante() {
        return fabricante;
    }

    public void setFabricante(String fabricante) {
        this.fabricante = fabricante;
    }

    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public String getPlaca() {
        return placa;
    }

    public void setPlaca(String placa) {
        this.placa = placa;
    }

    public String toString(){
        String str = "[Placa: " + placa;
        str += "/ Modelo: " + modelo;
        str += "/ Fabricante: " + fabricante;
        str += "/ Ano: " + anoFabricacao;
        str += "/ Cor: " + cor +  "]";


        return str;
    }
}
