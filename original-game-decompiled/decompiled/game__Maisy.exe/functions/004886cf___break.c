
/* ==== __break @ 004886cf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004886cf-004886cf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


