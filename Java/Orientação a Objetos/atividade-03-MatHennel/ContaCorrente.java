public class ContaCorrente {

    private int numeroDaConta;
    private int agencia;
    private String documento;
    private String senha;
    private boolean ativa;
    private double saldo;

    public ContaCorrente(){

    }

    public ContaCorrente(int numeroDaConta,int agencia){
        this.numeroDaConta = numeroDaConta;
        this.agencia = agencia;
    }

    public ContaCorrente(int numeroDaConta,int agencia,boolean ativa){
        this.numeroDaConta = numeroDaConta;
        this.agencia = agencia;
        this.ativa = ativa;
    }


    public void primeiroDeposito(double saldo){
        this.saldo = saldo;
    }

    public void depositar(double valor) {
        saldo = saldo + valor;
    }

    public void sacar(double valor) {
        if (saldo >= valor) {
            saldo = saldo - valor;
        } else {
            System.out.println("Saldo insuficiente!");
        }

    }

    public int getnumeroDaConta() {
        return numeroDaConta;
    }

    public void setnumeroDaConta(int numeroDaConta) {
        this.numeroDaConta = numeroDaConta;
    }

    public String getDocumento() {
        return documento;
    }

    public void setDocumento(String documento) {
        this.documento = documento;
    }

    public String getSenha() {
        return senha;
    }

    public void setSenha(String senha) {
        this.senha = senha;
    }

    public int getAgencia() {
        return agencia;
    }

    public void setAgencia(int agencia) {
        this.agencia = agencia;
    }

    public boolean getAtiva() {
        return ativa;
    }

    public void setAtiva(boolean ativa) {
        this.ativa = ativa;
    }

    public String toString1(){
        String str = "\t - Numero da Conta: "+ numeroDaConta;
        str = str + "\n\t - Numero da Agencia: "+ agencia;
        str = str + "\n\t - Documento: "+ documento;
        str = str + "\n\t - Senha:  "+ senha;
        str = str + "\n\t - Status:  "+ ativa;


        return str;
    }

    public String toString2(){
        
        
        return "Seu saldo é " + saldo;
    }

}