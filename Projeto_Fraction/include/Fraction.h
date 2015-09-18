/**
* Uma classe para simular uma fracao.
* */

#ifndef INTCELL_H
#define INTCELL_H

class FractionType {
    public:
    /*! Inicializa uma fração.
      @param numerator Valor para o numerador da fra ̧ca~o
      @param denominator Valor para o denominador da fra ̧c~ao */
    void Initialize( int numerator, int denominator );
    /*! Recupera o numerador. @return O numerador. */
    int GetNumerator ();
    /*! Recupera o denominador.
      @return O denominador. */
    int GetDenominator();
    /*! Determina se a frac ̧~ao e ́ zero.
      @return Verdadeiro se a fra ̧ca~o for zero,
      falso caso contr ́ario */
    bool IsZero();
    /*! Determina se a frac ̧~ao e ́ impr ́opria (ou pro ́pria, via nega ̧c~ao). @return Verdadeiro se na~o for pro ́pria ,
      falso se for pr ́opria. */
    bool IsNotProper();
    /*! Converte uma frac ̧~ao para um n ́umero inteiro e uma parte
      fracion ́aria.
      A parte fracion ́aria deve ser armazenada na classe e a
      parte inteira retornada.
      @return A parte inteira */
    int ConvertToProper();

    private:
    //! Inteiro correspondente ao numerador.
    int num;
    //! Inteiro correspondente ao denominador.
    int denom;
};

#endif
