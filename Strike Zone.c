def print_progress_bar(size, progress, strike_zone):
    total = size
    filled = round(progress * total)
    strike = min(strike_zone, filled)

    bar = '|'
    bar += '=' * filled
    bar += ' ' * (total - filled)
    bar += '|'

    strike_start = round((total - strike) / 2)
    strike_end = strike_start + strike
    bar = bar[:strike_start] + '[' + bar[strike_start:strike_end] + ']' + bar[strike_end:]

    print(bar)

# Test the function
print_progress_bar(10, 0.5, 1)
print_progress_bar(10, 0.5, 2)
print_progress_bar(10, 0.5, 4)
