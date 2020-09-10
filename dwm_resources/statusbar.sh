NAME_HOSTNAME="$(whoami)@$(hostname)"

while true; do
    #DATI DINAMICI
    DATETIME="$(date "+%d/%m/%y-%H:%M")"
    CPU_USAGE="cpu $($DWM_RESOURCES_DIR/cpu.sh)"
    MEM_USAGE="mem $($DWM_RESOURCES_DIR/mem.sh)"

    xsetroot -name "$MEM_USAGE | $CPU_USAGE | $NAME_HOSTNAME | $DATETIME"
    #echo "$MEM_USAGE | $CPU_USAGE | $NAME_HOSTNAME | $DATETIME"
    sleep 1
done
