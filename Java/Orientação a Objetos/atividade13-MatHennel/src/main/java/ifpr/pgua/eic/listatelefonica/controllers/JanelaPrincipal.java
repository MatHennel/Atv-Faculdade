package ifpr.pgua.eic.listatelefonica.controllers;

import ifpr.pgua.eic.listatelefonica.App;
import ifpr.pgua.eic.listatelefonica.utils.BorderPaneRegion;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;

public class JanelaPrincipal {
    


    @FXML
    private void cadastro(ActionEvent evt){
        App.changeScreenRegion("CADASTRO", BorderPaneRegion.CENTER);
    }

    @FXML
    private void listar(ActionEvent evt){
        App.changeScreenRegion("LISTA", BorderPaneRegion.CENTER);
    }




}
