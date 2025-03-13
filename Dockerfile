FROM silkeh/clang

WORKDIR /c

COPY . .

RUN apt-get update \
    && apt-get install aspell -y

RUN apt-get install git-all -y

RUN apt-get install python3 -yqq && apt-get install python3-pip -yqq

RUN ln -s /usr/bin/python3 /usr/bin/python

RUN python -m pip install -r requirements.txt --break-system-packages

RUN adduser -u 5678 --disabled-password --gecos "" c && chown -R c /c
USER c