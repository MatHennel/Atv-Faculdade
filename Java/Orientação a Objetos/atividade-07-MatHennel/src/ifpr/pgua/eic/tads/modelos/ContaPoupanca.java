package ifpr.pgua.eic.tads.modelos;

public class ContaPoupanca extends ContaCorrente{

    private double taxaDeRendimento;

    public ContaPoupanca(int numeroDaConta, int agencia, Pessoa pessoa,String senha,
    boolean ativa, double taxaDeRendimento) {
        super(numeroDaConta, agencia, pessoa,senha,ativa,0);
        
    }

    public ContaPoupanca(int numeroDaConta, int agencia,Pessoa pessoa, String senha,
    boolean ativa, double saldo, double taxaDeRendimento) {
        super(numeroDaConta, agencia, pessoa,senha,ativa,saldo);
        
    }

    public void render(){
        saldo = saldo * taxaDeRendimento / 100;
    }
    
}
