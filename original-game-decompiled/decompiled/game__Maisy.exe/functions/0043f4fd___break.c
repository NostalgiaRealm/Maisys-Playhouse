
/* ==== __break @ 0043f4fd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043f4fd-0043f4fd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


