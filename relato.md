### Relato

Na montagem do projeto de semáforo com o ESP32, utilizei três LEDs para representar as cores de um semáforo: vermelho, amarelo e verde. Cada LED foi conectado a um pino específico do ESP32, com resistores para limitar a corrente e proteger os LEDs. As conexões foram feitas da seguinte forma: o LED vermelho ao pino 27, o LED amarelo ao pino 26, e o LED verde ao pino 25. Os terminais negativos dos LEDs foram conectados ao pino GND do ESP32, formando um circuito seguro e funcional para representar o sistema de semáforo.

Para adicionar uma funcionalidade extra ao projeto, decidi ir além e incluir um *buzzer*, que simula um alerta sonoro quando o sinal verde pisca, mostrando para os pedestres que o tempo está acabando. O *buzzer* foi conectado ao pino 5 para o terminal positivo e ao GND para o terminal negativo. 



### Avaliador: Roberto Diniz Branco Filho

| Critério                                                                                                 | Contempla (Pontos) | Contempla Parcialmente (Pontos) | Não Contempla (Pontos) | Observações do Avaliador |
|---------------------------------------------------------------------------------------------------------|--------------------|----------------------------------|--------------------------|---------------------------|
| Montagem física com cores corretas, boa disposição dos fios e uso adequado de resistores                |  3              |     -                            | -                        |   A montagem física está correta e organizada, e os componentes estão sendo usados adequadamente                        |
| Temporização adequada conforme tempos medidos com auxílio de algum instrumento externo                  |  3              | -                          | -                        |          Os tempos estão seguindo os requisitos e foram testados com a ajuda do celular                 |
| Código implementa corretamente as fases do semáforo e estrutura do código (variáveis representativas e comentários) |  3              | -                          | -                        |              O código implementa a lógica proposta corretamente e apresenta comentários explicativos             |
| Extra: Implmeentou um componente de liga/desliga no semáforo e/ou usou ponteiros no código |  1              |  -                         | -                        |         Conseguiu um ponto extra, pois colocou um buzzer quando o LED verde foi acionado                  |
|  |              10                                               |  | |**Pontuação Total**|
