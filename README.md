# Listening Machines

Some things to install:

1) An IDE (VSCode, Cursor, etc.). Terminal is fine too but you will need a way to load/run [Jupyter Notebooks](https://jupyter.org/).

## Installation

- Install [uv](https://docs.astral.sh/uv/)

- On your local machine, Clone this repo and then change into this repo's directory

    `git clone https://github.com/johanndiedrick/listening_machines`

    `cd listening_machines`

- Create a new environment, activate your environment, and install the required libraries:

    `uv venv`

    `source .venv/bin/activate`

    `uv pip install -r requirements.txt -p .venv`

    `uv run -p .venv python -m ipykernel install --user --name listening-machines --display-name "Python (.venv listening_machines)"`

- Restart your IDE and you should be able to run the cells in the notebook after selecting the kernel named `listening_machines`

- Configure notebook output stripping: (could also use `pre-commit` down the line...)

    `nbstripout --install`

- Note for macOS: if pyaudio fails to build, install PortAudio first:

    `brew install portaudio`