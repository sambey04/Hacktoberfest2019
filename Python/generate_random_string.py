from string import ascii_letters, punctuation, digits
from random import choice


def generate_random_string(size: int=52) -> str:

    """ 
        # will returm a random string to be used like a 
        # secret_key for flask or django
        #
        >>> generate_random_string(size=52)
        >>> ',Pq}xPo(8X!e^}W1+^Om0cB0Zzi}$\\J+.EWwM`^Rqf[Y8,kt~6HO'
    """
    CHARS = ascii_letters + punctuation + digits

    string = ''
    for i in range(size):
        string += ''.join(choice(CHARS))
    
    return string