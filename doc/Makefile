ALL:Manual.pdf 

%.pdf: %.tex Makefile
	pdflatex --enable-write18 $<
	pdflatex --enable-write18 $<

clean:
	rm -f *.aux *.bbl *.blg *.log *.pdf

run:
	xreader -s *.pdf

