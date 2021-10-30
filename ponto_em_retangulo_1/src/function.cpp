#include "function.h"

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */

location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
    // TODO: Coloque aqui seu código.

    if((P.x >= IE.x && P.x <= SD.x) && (P.y >= IE.y && P.y <= SD.y)){
        if (P.x == IE.x || P.x == SD.x || P.y == IE.y || P.y == SD.y) {
            return location_t::BORDER;
        }
        else{
            return location_t::INSIDE;
        }

    }
    // TODO: Substitua o retorno conforme desejar. Isso é apenas um STUB, usado apenas para compilar.
    return location_t::OUTSIDE;
}
