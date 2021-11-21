package main//package	geziyor_test
import (
	"fmt"
	"github.com/geziyor/geziyor"
	"github.com/geziyor/geziyor/client"
)
func main() {
	geziyor.NewGeziyor(&geziyor.Options{
		StartRequestsFunc: func(g *geziyor.Geziyor) {
			g.GetRendered("https://www.forbes.com/real-time-billionaires/#62cf28543d78", g.Opt.ParseFunc)
		},
		ParseFunc: func(g *geziyor.Geziyor, r *client.Response) {
			fmt.Println(string(r.Body))	},
	}).Start()		     //BrowserEndpoint: "ws://localhost:3000",

	}
	func copy(g *geziyor.Geziyor, r *client.Response) {
geziyor.NewGeziyor(&geziyor.Options{
	g.GetRendered("https://www.forbes.com/real-time-billionaires/#62cf28543d78", g.Opt.ParseFunc),
    ParseFunc: func(g *geziyor.Geziyor, r *client.Response) {
        r.HTMLDoc.Find("div#main-content").Each(func(_ int, s *goquery.Selection) {
			g.Exports <- map[string]interface{}{
				"NAME":              s.Find("td.name").Text(),
				"NET WORTH":         s.Find("td.Net.Worth").Text(),
				"AGE":               s.Find("td.age").Text(),
				"INCOME SOURCE":     s.Find("td.source").Text(),
				"COUNTRY/TERRITORY": s.Find("td.Country/territory").Text(),
			}
		},
	},
}).Start()
	}
	