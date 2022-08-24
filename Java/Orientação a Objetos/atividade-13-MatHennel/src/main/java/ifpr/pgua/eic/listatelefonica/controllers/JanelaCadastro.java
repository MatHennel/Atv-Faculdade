package ifpr.pgua.eic.listatelefonica.controllers;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.Alert;
import javafx.scene.control.TextField;
import javafx.scene.control.Alert.AlertType;
import ifpr.pgua.eic.listatelefonica.models.*;

public class JanelaCadastro {
    @FXML
    private TextField tfNome = null;

    @FXML
    private TextField tfTelefone = null;

    @FXML
    private TextField tfEmail = null;

    private ListaTelefonica contato;

    public JanelaCadastro(ListaTelefonica contato) {
        this.contato = contato;
    }

    @FXML

    private void cadastrar(ActionEvent evt) {
        String nome = tfNome.getText();
        String telefone = tfTelefone.getText();
        String email = tfEmail.getText();

        if (contato.adicionarContato(nome, telefone, email) || nome == null || telefone == null) {
            System.out.println(contato.getContatos());
            Alert alert = new Alert(AlertType.INFORMATION, "Cadastro realizado");
            alert.showAndWait();
            limpar();

        } else {
            Alert alert = new Alert(AlertType.ERROR, "Cadastro não realizado");
            alert.showAndWait();
            
        }
    }

    private void limpar(){
        tfNome.clear();
        tfEmail.clear();
        tfTelefone.clear();
    }
}
