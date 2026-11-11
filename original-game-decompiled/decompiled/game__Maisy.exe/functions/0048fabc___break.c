
/* ==== __break @ 0048fabc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048fabc-0048fabc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


