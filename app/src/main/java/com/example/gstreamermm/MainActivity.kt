package com.example.gstreamermm

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.TextView
import com.example.gstreamermm.databinding.ActivityMainBinding


class MainActivity : AppCompatActivity() {

    private lateinit var binding: ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        // Example of a call to a native method
        playFile();
    }

    /**
     * A native method that is implemented by the 'gstreamermm' native library,
     * which is packaged with this application.
     */
    external fun stringFromJNI(): String
    external fun playFile()

    companion object {
        // Used to load the 'gstreamermm' library on application startup.
        init {
            System.loadLibrary("gstreamermm")
        }
    }
}