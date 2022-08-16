package base.cadastro;

import java.util.ArrayList;

import javafx.event.ActionEvent;
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.Parent;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.layout.HBox;
import javafx.scene.layout.VBox;
import javafx.scene.text.Font;
import javafx.scene.text.Text;

public class TelaCadastroVeiculo {

    
    private Veiculo veiculo;
    private Label lbModelo;
    private TextField tfModelo;
    private HBox boxModelo;
    private HBox boxMarca;
    private TextField tfMarca;
    private Label lbMarca;
    private Text titulo;
    private HBox boxTitulo;
    private Label lbPlaca;
    private TextField tfPlaca;
    private HBox boxPlaca;
    private Label lbCor;
    private TextField tfCor;
    private HBox boxCor;
    private Label lbAnoFabricacao;
    private TextField tfAnoFabricacao;
    private HBox boxAnoFabricacao;
    private HBox boxBotoes;
    private Button salvar;
    private Button cancelar;

    private VBox root;

    public TelaCadastroVeiculo() {
        inicializa();
    }

    private void inicializa() {

        root = new VBox();
        root.setPrefSize(500, 300);
        
        root.setSpacing(5);
        root.setPadding(new Insets(15));

        titulo = new Text("Cadastro de Veículos");
        titulo.setFont(new Font(30));
        boxTitulo = new HBox();
        boxTitulo.setAlignment(Pos.CENTER);
        boxTitulo.getChildren().add(titulo);
        root.getChildren().add(boxTitulo);

        lbModelo = new Label("_MODELO");
        lbModelo.setLabelFor(tfModelo);
        lbModelo.setMnemonicParsing(true);
        

        boxModelo = new HBox();
        boxModelo.setAlignment(Pos.CENTER_RIGHT);
        boxModelo.setSpacing(5);
        boxModelo.getChildren().add(lbModelo);
        


        tfModelo = new TextField();
        tfModelo.setPromptText("Modelo");
        tfModelo.setMinWidth(400);
        boxModelo.getChildren().add(tfModelo);
        root.getChildren().add(boxModelo);

        lbMarca = new Label("MARCA");
        lbMarca.setLabelFor(lbMarca);
        lbMarca.setMnemonicParsing(true);
        tfMarca = new TextField();
        tfMarca.setPromptText("Marca");
        tfMarca.setMinWidth(400);
        boxMarca = new HBox();
        boxMarca.setAlignment(Pos.CENTER_RIGHT);
        boxMarca.setSpacing(5);
        boxMarca.getChildren().add(lbMarca);
        boxMarca.getChildren().add(tfMarca);
        root.getChildren().add(boxMarca);

        lbPlaca = new Label("PLACA");
        lbPlaca.setLabelFor(lbPlaca);
        lbPlaca.setMnemonicParsing(true);
        tfPlaca = new TextField();
        tfPlaca.setPromptText("Placa");
        tfPlaca.setMinWidth(400);
        boxPlaca = new HBox();
        boxPlaca.setAlignment(Pos.CENTER_RIGHT);
        boxPlaca.setSpacing(5);
        boxPlaca.getChildren().add(lbPlaca);
        boxPlaca.getChildren().add(tfPlaca);
        root.getChildren().add(boxPlaca);

        lbCor = new Label("COR");
        lbCor.setLabelFor(lbCor);
        lbCor.setMnemonicParsing(true);
        tfCor = new TextField();
        tfCor.setPromptText("Cor");
        tfCor.setMinWidth(400);
        boxCor = new HBox();
        boxCor.setAlignment(Pos.CENTER_RIGHT);
        boxCor.setSpacing(5);
        boxCor.getChildren().add(lbCor);
        boxCor.getChildren().add(tfCor);
        root.getChildren().add(boxCor);

        lbAnoFabricacao = new Label("ANO");
        lbAnoFabricacao.setLabelFor(lbAnoFabricacao);
        lbAnoFabricacao.setMnemonicParsing(true);
        tfAnoFabricacao = new TextField();
        tfAnoFabricacao.setPromptText("Ano");
        tfAnoFabricacao.setMinWidth(400);
        boxAnoFabricacao = new HBox();
        boxAnoFabricacao.setAlignment(Pos.CENTER_RIGHT);
        boxAnoFabricacao.setSpacing(5);
        boxAnoFabricacao.getChildren().add(lbAnoFabricacao);
        boxAnoFabricacao.getChildren().add(tfAnoFabricacao);
        root.getChildren().add(boxAnoFabricacao);

        salvar = new Button("Salvar");
        salvar.setOnAction(this::salvar);
        salvar.setPrefWidth(100);

        cancelar = new Button("Cancelar");
        cancelar.setOnAction(this::cancelar);
        cancelar.setPrefWidth(100);

        boxBotoes = new HBox();
        boxBotoes.setAlignment(Pos.CENTER_RIGHT);
        boxBotoes.setSpacing(5);
        boxBotoes.getChildren().addAll(cancelar, salvar);
        root.getChildren().add(boxBotoes);

    }

    private void salvar(ActionEvent evt) {
        veiculo = new Veiculo(tfPlaca.getText(), tfModelo.getText(), tfMarca.getText(),
                Integer.valueOf(tfAnoFabricacao.getText()), tfCor.getText());
        
        TelaListaVeiculos.table.getItems().add(veiculo);
    
        App.popScreen();
    }

    private void cancelar(ActionEvent evt) {
        App.popScreen();
    }

    public Parent getRoot() {

        return root;
    }

}
