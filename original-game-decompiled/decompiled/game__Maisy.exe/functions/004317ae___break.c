
/* ==== __break @ 004317ae ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004317ae-004317ae
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


