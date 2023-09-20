#!/bin/bash -i

#find ./mpd_gem_view_ssp/ -type f -name "*.cpp" -print0 | xargs -0 sed -e 's/width/width/g'

find ./mpd_gem_view_ssp/ -type f -exec sed -i 's/width/width/g' {} \;

