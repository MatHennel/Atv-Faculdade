package base.exemplos.parent;

import javafx.event.ActionEvent;
import javafx.scene.Parent;
import javafx.scene.control.Button;
import javafx.scene.layout.VBox;
import javafx.scene.text.Text;

public class JanelaPrincipal{
    
    private VBox root;
    private Text txtInfo;
    private Button btTela1;
    private Button btTela2;

    public JanelaPrincipal(){
        inicializa();
    }


    private void inicializa(){
        root = new VBox();

        root.setPrefHeight(400);
        root.setPrefWidth(400);
        
        
        txtInfo = new Text("Exemplo de mudança de janela");
        btTela1 = new Button("Ir para a Janela 1");
        btTela1.setOnAction(this::mudarTela1);
        
        btTela2 = new Button("Ir para a Janela 2");
        btTela2.setOnAction(this::mudarTela2);
        
        root.getChildren().add(txtInfo);
        root.getChildren().add(btTela1);
        root.getChildren().add(btTela2);


    }


    public Parent getRoot(){
        return root;
    }


    private void mudarTela1(ActionEvent evt){
        App.pushScreen(new Tela1().getRoot());
    }

    private void mudarTela2(ActionEvent evt){
        App.pushScreen(new Tela2().getRoot());
    }



}
