.PHONY: clean All

All:
	@echo "----------Building project:[ br4_proj - Debug ]----------"
	@"$(MAKE)" -f  "br4_proj.mk"
clean:
	@echo "----------Cleaning project:[ br4_proj - Debug ]----------"
	@"$(MAKE)" -f  "br4_proj.mk" clean
