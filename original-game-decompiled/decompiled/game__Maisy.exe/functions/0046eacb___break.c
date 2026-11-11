
/* ==== __break @ 0046eacb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0046eacb-0046eacb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


