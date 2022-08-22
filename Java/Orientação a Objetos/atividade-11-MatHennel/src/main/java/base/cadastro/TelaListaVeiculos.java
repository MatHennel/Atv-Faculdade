package base.cadastro;

import java.util.ArrayList;
import java.util.List;

import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.event.ActionEvent;
import javafx.geometry.Pos;
import javafx.scene.Parent;
import javafx.scene.control.Button;
import javafx.scene.control.TableColumn;
import javafx.scene.control.TableView;
import javafx.scene.control.cell.PropertyValueFactory;
import javafx.scene.layout.HBox;
import javafx.scene.layout.VBox;
import javafx.scene.text.Text;

public class TelaListaVeiculos {

    

    private VBox root;
    private Button btVoltar;
    private HBox boxBtVoltar;
    TableColumn<Veiculo,String> modelo;
    TableColumn<Veiculo,String> marca; 
    TableColumn<Veiculo,String> placa; 
    TableColumn<Veiculo,String> cor; 
    TableColumn<Veiculo,Integer> ano; 
   

    public static List<Veiculo> listaVeiculos = new ArrayList<>();

    public static TableView<Veiculo> table = new TableView<>();

   
 
    public TelaListaVeiculos() {
        inicializa();
    }

    private void inicializa() {

        root = new VBox();
        root.setPrefHeight(300);
        root.setPrefWidth(500);
        root.setSpacing(5);

        modelo = new TableColumn<>("Modelo");
        modelo.setPrefWidth(100);
        modelo.setCellValueFactory(
            new PropertyValueFactory<>("modelo")
        );

        marca = new TableColumn<>("Marca");
        marca.setPrefWidth(100);
        marca.setCellValueFactory(
            new PropertyValueFactory<>("fabricante")
        );

        placa = new TableColumn<>("Placa");
        placa.setPrefWidth(100);
        placa.setCellValueFactory(
            new PropertyValueFactory<>("placa")
        );

        cor = new TableColumn<>("Cor");
        cor.setPrefWidth(100);
        cor.setCellValueFactory(
            new PropertyValueFactory<>("cor")
        );      
        
        ano = new TableColumn<>("Ano");
        ano.setPrefWidth(100);
        ano.setCellValueFactory(
            new PropertyValueFactory<>("anoFabricacao")
        );

        
            table.getColumns().addAll(modelo,marca,placa,cor,ano);
            

        


        


            

            
        

        root.getChildren().add(table);

        btVoltar = new Button("Voltar");
        btVoltar.setPrefWidth(150);
        btVoltar.setOnAction(this::voltar);

        boxBtVoltar = new HBox();
        boxBtVoltar.setAlignment(Pos.CENTER);
        boxBtVoltar.getChildren().add(btVoltar);
        root.getChildren().add(boxBtVoltar);

    }

    private void voltar(ActionEvent evt) {
        App.popScreen();
    }

    public Parent getRoot() {
        return root;
    }

}
