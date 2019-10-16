def remove_symbol(css: str) -> str:
    """ 
        remove todos os sinais de '-' menos de uma string
        >>> remove_symbol(css='font-color') 
        >>> vai retornar fontColor
        a saida vai ser uma string
        css_list = [
            'font-size',
            'background-color',
            'font-size',
            'background-origin',
            'border-bottom-left-radius',
            'border-bottom-right-radius',
            'border-bottom-style',
        ]
        new_list = []
        for item in css_list:
            new_list.append(item)
    """    
    if '-' in css:
        css = list(css)
        index = css.index('-') + 1
        css[index] = css[index].upper() 
        css.remove('-')

        return ''.join(css) if not '-' in css else remove_symbol(css)

    return css

