
/* ==== __break @ 0043d42f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043d42f-0043d42f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


