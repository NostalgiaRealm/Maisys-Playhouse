
/* ==== __break @ 140223bb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140223bb-140223bb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


