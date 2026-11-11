
/* ==== __break @ 004107cd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004107cd-004107cd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


