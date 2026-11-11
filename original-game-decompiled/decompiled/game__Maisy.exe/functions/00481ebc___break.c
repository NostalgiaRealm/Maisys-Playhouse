
/* ==== __break @ 00481ebc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00481ebc-00481ebc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


