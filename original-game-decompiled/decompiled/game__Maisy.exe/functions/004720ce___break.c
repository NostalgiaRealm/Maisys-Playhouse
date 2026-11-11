
/* ==== __break @ 004720ce ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004720ce-004720ce
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


