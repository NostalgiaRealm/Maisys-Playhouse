
/* ==== __break @ 004886ce ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004886ce-004886ce
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


