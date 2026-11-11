
/* ==== __break @ 0042d5ef ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042d5ef-0042d5ef
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


