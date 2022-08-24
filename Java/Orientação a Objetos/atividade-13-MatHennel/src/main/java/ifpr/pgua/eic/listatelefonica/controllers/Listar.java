package ifpr.pgua.eic.listatelefonica.controllers;

import java.net.URL;
import java.util.ResourceBundle;

import ifpr.pgua.eic.listatelefonica.App;
import ifpr.pgua.eic.listatelefonica.models.Contato;
import ifpr.pgua.eic.listatelefonica.models.ListaTelefonica;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Button;
import javafx.scene.control.ListView;
import javafx.scene.control.TextArea;
import javafx.scene.control.TextField;
import javafx.scene.input.MouseEvent;

public class Listar implements Initializable {

    private ListaTelefonica contatoLista;

    @FXML
    private TextField tfBusca;

    @FXML
    private TextArea taDetalhes;

    @FXML
    private ListView<Contato> listView = new ListView<>();

    public Listar(ListaTelefonica contatoLista) {
        this.contatoLista = contatoLista;

    }

    @FXML
    private void mostrarDetalhes(MouseEvent evento) {
        Contato contato = listView.getSelectionModel().getSelectedItem();

        if (contato != null) {
            taDetalhes.clear();
            taDetalhes.appendText("Nome: " + contato.getNome() + "\n");
            taDetalhes.appendText("Telefone: " + contato.getTelefone() + "\n");
            taDetalhes.appendText("Email: " + contato.getEmail() + "\n");

        }
    }

    @FXML
    private void buscar(ActionEvent evt) {
       
        listView.getItems().clear();
        taDetalhes.clear();

        listView.getItems().addAll(contatoLista.buscaPorNome(tfBusca.getText()));


        
    }

    @Override
    public void initialize(URL arg0, ResourceBundle arg1) {
        listView.getItems().clear();

        // inicialização do listview
        listView.getItems().addAll(contatoLista.getContatos());

    }

}
