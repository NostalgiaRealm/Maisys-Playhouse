
/* ==== __break @ 004695ca ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004695ca-004695ca
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


