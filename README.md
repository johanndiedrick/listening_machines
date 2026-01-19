# Listening Machines

Some things to install:

1) An IDE (VSCode, Cursor, etc.). Terminal is fine too but you will need a way to load/run [Jupyter Notebooks](https://jupyter.org/).

## Installation

- Install [uv](https://docs.astral.sh/uv/)

- Create a new environment, activate your environment, and install the required libraries:

    `uv venv`

    `source .venv/bin/activate`

    `uv pip install -r requirements.txt`

- Configure notebook output stripping: (could also use `pre-commit` down the line...)

    `nbstripout --install`

- Register the Jupyter kernel from that venv

    `uv run -p .venv python -m ipykernel install --user --name listening-machines --display-name "Python (.venv listening_machines)`

- Note for macOS: if pyaudio fails to build, install PortAudio first:

    `brew install portaudio`