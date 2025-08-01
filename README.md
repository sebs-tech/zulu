# Zulu

> Zulu is a C program that translates any word into its military phonetic
> alphabet spelling, giving you the "Alpha, Bravo, Charlie" for each letter...

## Features

* **Phonetic Translation:** Converts a given word from the command line into its
military phonetic spelling.  
**Case-Insensitive:** Accepts both uppercase and lowercase letters in the input.  
**Simple Build System:** A straightforward `Makefile` to compile, install, and clean 
the project.  
**Standalone* Executable:** The program compiles into a single executable named
* `/usr/local/bin/zulu`.

## How to Build and Run

### Prerequisites

You will need a C compiler (`gcc`) and `make` installed on your system.

### Building

To compile the program, navigate to the project's root directory and run the
`make` command. This will create an executable file named `zulu`.

```sh make ```

### Running

After building, you can run the program by providing a word as a command-line
argument.

```sh ./zulu gemini ```

**Output:**

``` Phonetic spelling for 'gemini' is: Golf Echo Mike India November India ```

### Installation

To install the program and make it available system-wide, use the `make install`
command. This will copy the `zulu` executable to `/usr/local/bin`.

```sh sudo make install ```

Once installed, you can run `zulu` from any directory without needing to specify
the path.

```sh zulu hello ```

## File Structure

* `src/main.c`: Contains the `main` function and the core program logic for
* parsing input and calling the phonetic translation function.  `src/data.c`:
* Defines the constant array of strings for the phonetic alphabet.
* `src/include/data.h`: The header file that declares the phonetic alphabet
* array for use in `main.c`.  `Makefile`: The build script for compiling,
* installing, and cleaning the project.

## Credits

* **A chap from Spain** that asked me for my email and I was unable to do the 
Golf,Echo,Tararira thingie.  
**My wife** for helping me compile the list of military phonetics that she 
learned in the Scouts. 


## License

This project is open-source and available under the MIT License.
