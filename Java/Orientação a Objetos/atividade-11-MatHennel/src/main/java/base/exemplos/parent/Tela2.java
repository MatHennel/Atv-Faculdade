package base.exemplos.parent;

import javafx.event.ActionEvent;
import javafx.scene.Parent;
import javafx.scene.control.Button;
import javafx.scene.layout.VBox;
import javafx.scene.text.Text;

public class Tela2 {
    private VBox root;
    private Text txtInfo;
    private Button btVoltar;

    public Tela2(){
        inicializa();
    }

    private void inicializa(){
        root = new VBox();


        txtInfo = new Text("Tela 2");
        btVoltar = new Button("Voltar");
        btVoltar.setOnAction(this::voltar);

        root.getChildren().addAll(txtInfo);
        root.getChildren().add(btVoltar);
    }

    private void voltar(ActionEvent evt){
        App.popScreen();
    }

    public Parent getRoot(){
        return root;
    }

    
}
