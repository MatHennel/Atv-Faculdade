package ifpr.pgua.eic.tads.modelos;

public class ContaCorrenteEspecial extends ContaCorrente{

    protected double limite;

    public ContaCorrenteEspecial(int numeroDaConta, int agencia, Pessoa pessoa,String senha,
    boolean ativa, double limite) {
        super(numeroDaConta, agencia, pessoa,senha,ativa,0);
        
    }

    public ContaCorrenteEspecial(int numeroDaConta, int agencia,Pessoa pessoa, String senha,
    boolean ativa, double saldo, double limite) {
        super(numeroDaConta, agencia, pessoa,senha,ativa,saldo);
        
    }

    public boolean sacar(double valor){
        if(valor > 0 && valor <= saldo && valor <= saldo + limite){
            saldo = saldo - valor;
            return true;
        }else{
            return false;
        }
        
    }
    
}
