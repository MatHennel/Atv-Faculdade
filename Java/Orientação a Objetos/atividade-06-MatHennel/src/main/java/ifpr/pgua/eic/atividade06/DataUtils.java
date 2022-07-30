package ifpr.pgua.eic.atividade06;

import java.time.LocalDateTime;

public class DataUtils {
    
    /**
     * Método utilizado para calcular a quantidade de minutos que se passaram
     * entre duas datas.
     * @param entrada LocalDateTime indicando a hora de início do período
     * @param saida LocalDateTime indicando a hora de fim do período
     * @return o número de minutos passados desde a entrada até a saída (-1 se erro)
     * 
     * Pode gerar RuntimeException se a saida for menor que a entrada.
     * Pode gerar RuntimeException se as datas não estiverem no mesmo ano.
     */
    public static int calculaMinutos(LocalDateTime entrada, LocalDateTime saida){
        if(entrada.isAfter(saida)){
            throw new RuntimeException("Data de entrada inválida!");
        }
        if(saida.getYear() != entrada.getYear()){
            throw new RuntimeException("As datas devem possuir o mesmo ano!");
        }
        if(saida.getYear() == entrada.getYear()){
            int minutos = (saida.getDayOfYear()-entrada.getDayOfYear())*24*60;
            minutos += (saida.getHour()-entrada.getHour())*60;
            minutos += saida.getMinute()-entrada.getMinute();
            
            return minutos;

        }
        return -1;
    }
}
