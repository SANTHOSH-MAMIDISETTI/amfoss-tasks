package main

import (
	"github.com/PuerkitoBio/goquery"
	"github.com/geziyor/geziyor"
	"github.com/geziyor/geziyor/client"
	"github.com/geziyor/geziyor/export"
)

//package	geziyor_test
func main() {
	geziyor.NewGeziyor(&geziyor.Options{
		//g.GetRendered("https://www.forbes.com/real-time-billionaires/#62cf28543d78", g.Opt.ParseFunc)
		StartURLs: []string{"https://www.forbes.com/real-time-billionaires/#2e8f38c73d78"},
		ParseFunc: func(g *geziyor.Geziyor, r *client.Response) {
			r.HTMLDoc.Find("div.quote").Each(func(_ int, s *goquery.Selection) {
				g.Exports <- map[string]interface{}{
					"NAME":              s.Find("td.name").Text(),
					"NET WORTH":         s.Find("td.Net.Worth").Text(),
					"AGE":               s.Find("td.age").Text(),
					"INCOME SOURCE":     s.Find("td.source").Text(),
					"COUNTRY/TERRITORY": s.Find("td.Country/territory").Text(),
				}
			})
		},
		Exporters: []export.Exporter{&export.JSON{}},
	}).Start()
}
