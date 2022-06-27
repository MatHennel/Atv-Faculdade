package ifpr.pgua.eic.tads.modelos;

import java.util.ArrayList;

public class Banco {

    private String nome;
    private String telefone;
    private String cnpj;
    private ArrayList<Pessoa> pessoas;
    private ArrayList<ContaCorrente> contaCorrentes;

    public Banco(String nome, String telefone, String cnpj) {
        this.nome = nome;
        this.telefone = telefone;
        this.cnpj = cnpj;
        pessoas = new ArrayList<Pessoa>();
        contaCorrentes = new ArrayList<ContaCorrente>();

    }

    public void cadastrarPessoa(Pessoa pessoa) {
        this.pessoas.add(pessoa);

    }

    public ArrayList<Pessoa> getPessoas() {
        return pessoas;
    }

    public void cadastarConta(ContaCorrente conta) {
        this.contaCorrentes.add(conta);

    }

    public ArrayList<ContaCorrente> getContaCorrentes() {
        return contaCorrentes;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getCnpj() {
        return cnpj;
    }

    public void setCnpj(String cnpj) {
        this.cnpj = cnpj;
    }

    public String getTelefone() {
        return telefone;
    }

    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }

}
