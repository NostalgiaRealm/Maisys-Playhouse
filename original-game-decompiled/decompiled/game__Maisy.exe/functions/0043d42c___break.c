
/* ==== __break @ 0043d42c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043d42c-0043d42c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


