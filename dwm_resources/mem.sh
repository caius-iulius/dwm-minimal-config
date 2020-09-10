while IFS=':k '  read -r key val _; do
    case $key in
        MemTotal)
            mem_used=$((mem_used + val))
            mem_full=$val
        ;;
         Shmem)
            mem_used=$((mem_used + val))
        ;;
         MemFree|Buffers|Cached|SReclaimable)
            mem_used=$((mem_used - val))
        ;;
    esac
done < /proc/meminfo
 
mem_used=$((mem_used / 1024))
mem_full=$((mem_full / 1024))

echo "${mem_used:-?}M / ${mem_full:-?}M"
