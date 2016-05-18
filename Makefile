.PHONY: clean All

All:
	@echo "----------Building project:[ Week2_opdracht3 -  ]----------"
	@cd "Week2_opdracht3" && "$(MAKE)" -f  "Week2_opdracht3.mk"
clean:
	@echo "----------Cleaning project:[ Week2_opdracht3 -  ]----------"
	@cd "Week2_opdracht3" && "$(MAKE)" -f  "Week2_opdracht3.mk" clean
