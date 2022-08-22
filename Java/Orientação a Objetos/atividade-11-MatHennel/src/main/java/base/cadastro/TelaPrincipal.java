package base.cadastro;

import javafx.event.ActionEvent;
import javafx.geometry.Pos;
import javafx.scene.Parent;
import javafx.scene.control.Button;
import javafx.scene.layout.HBox;
import javafx.scene.layout.VBox;
import javafx.scene.text.Text;

public class TelaPrincipal {
    private HBox root;
    private Button btCadastroVeiculo;
    private Button btListaVeiculo;

    public TelaPrincipal(){
        inicializa();
    }

    private void inicializa(){
        root = new HBox();

        root.setPrefHeight(300);
        root.setPrefWidth(500);

        root.setAlignment(Pos.CENTER);
        root.setSpacing(5);

        

        

        btCadastroVeiculo = new Button("Cadastro Veículo");
        btCadastroVeiculo.setOnAction(this::telaCadastroVeiculo);

        btListaVeiculo = new Button("Listagem de Veículos");
        btListaVeiculo.setOnAction(this::telaListaVeiculo);

        btCadastroVeiculo.setPrefWidth(200);
        btListaVeiculo.setPrefWidth(200);

        root.getChildren().add(btCadastroVeiculo);
        root.getChildren().add(btListaVeiculo);
    }

    public Parent getRoot() {
        return root;
    }

    private void telaCadastroVeiculo(ActionEvent evt){
        App.pushScreen(new TelaCadastroVeiculo().getRoot());
    }

    private void telaListaVeiculo(ActionEvent evt){
        App.pushScreen(new TelaListaVeiculos().getRoot());
    }
}
