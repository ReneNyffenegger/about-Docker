FROM busybox

ARG  filename=default-file-name
ENV  value=foo-bar-baz

COPY script.sh /script.sh

RUN  chmod +x /script.sh
RUN  touch /tmp/$filename

CMD /script.sh
