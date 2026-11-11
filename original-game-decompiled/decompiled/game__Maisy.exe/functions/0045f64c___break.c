
/* ==== __break @ 0045f64c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f64c-0045f64c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


