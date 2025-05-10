FROM silkeh/clang

WORKDIR /c

COPY . .

RUN apt-get update \
    && apt-get install aspell -y

RUN apt-get install git-all -y

RUN apt-get install python3 -y && \
    apt-get install python3-pip -y && \
    apt-get install pipenv -y && \
    ln -s /usr/bin/python3 /usr/bin/python

RUN pipenv sync --system -d

RUN adduser -u 5678 --disabled-password --gecos "" c && chown -R c /c
USER c