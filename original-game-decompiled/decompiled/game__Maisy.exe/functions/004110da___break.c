
/* ==== __break @ 004110da ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004110da-004110da
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


