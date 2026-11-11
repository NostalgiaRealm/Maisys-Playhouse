
/* ==== __break @ 00413fbe ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00413fbe-00413fbe
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


