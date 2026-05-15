"""Functions used in preparing Guido's gorgeous lasagna.

Learn about Guido, the creator of the Python language:
https://en.wikipedia.org/wiki/Guido_van_Rossum

This is a module docstring, used to describe the functionality
of a module and its functions and/or classes.
"""



EXPECTED_BAKE_TIME = 40;


def bake_time_remaining(elapsed_bake_time):
    """Calculate time remaining given time elapsed.

    Parameters: e_b_t(int): elapsed lasagna time.

    Returns: remaining lasagna cook time.
    """
    
    return (EXPECTED_BAKE_TIME - elapsed_bake_time)

    pass



def preparation_time_in_minutes(number_of_layers):
    """Calculate prep time given num lasagna layers.

    Parameters: n_o_l(int): lasagna layers.

    Returns: cook time needed for given num layers.
    """
    
    return (number_of_layers * 2)



def elapsed_time_in_minutes(number_of_layers, elapsed_bake_time):
    """Calculate elapsed time w num layer and elapsed time.

    Parameters: 
    n_o_l(int): lasagna layers.
    e_b_t(int): elapsed lasagna time.

    Returns: total elapsed time 
    """
    
    return (preparation_time_in_minutes(number_of_layers) + elapsed_bake_time)




